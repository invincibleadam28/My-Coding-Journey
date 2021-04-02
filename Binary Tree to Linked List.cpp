import java.util.*;

/**
 * public class Tree {
 *   int val;
 *   Tree left;
 *   Tree right;
 * }
 */

/**
 * class LLNode {
 *   int val;
 *   LLNode next;
 * }
 */
class Solution {

  LLNode head;

  public LLNode solve(Tree root) {
    // use recursive inorder approach to keep appending new nodes

    LLNode sentinel = new LLNode();
    head = sentinel;
    solver(root);
    return sentinel.next;
  }

  public void solver(Tree root) {
    if (root == null) {
      return;
    }

    solver(root.left);

    LLNode curr = new LLNode();
    curr.val = root.val;
    head.next = curr;
    head = head.next;

    solver(root.right);

  }
}