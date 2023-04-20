var addTwoNumbers = function(l1, l2) {
    let cur = new ListNode();
        let res = cur;
        let carry = 0;
        while (l1 || l2 || carry) {
            if (l1) {
                carry += l1.val;
                l1 = l1.next;
            }
            if (l2) {
                carry += l2.val;
                l2 = l2.next;
            }
            let [div, mod] = [Math.floor(carry / 10), carry % 10];
            carry = div;
            cur.next = new ListNode(mod);
            cur = cur.next;
        }
        return res.next;
};