int solve(vector<int>& nums) {
  multiset<int> buses;

  for (int num : nums)
    if (buses.empty() or num <= *buses.begin())
      buses.insert(num);
    else
      buses.erase(prev(buses.lower_bound(num))), buses.insert(num);

  return buses.size();
}