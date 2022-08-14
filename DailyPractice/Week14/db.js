const x = "AA AB AC 11 1112 CC"
let map = {}
for (let c of x) {
    if()
    if (c == " ") {
        continue
    }
    else {
        if (map[c]) {
            map[c] += 1;
        } else {
            map[c] = 1;
        }
    }
}
