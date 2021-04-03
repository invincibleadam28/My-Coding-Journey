int solve(int start, int end)
{
  int c = 0;
  while (end != start)
  {
    if (end > start && end % 2 == 0)
      end /= 2;
    else if (end > start && end % 2 != 0)
      end += 1;
    else
    { c += (start - end); break;}
    c++;
  }
  return c;


}