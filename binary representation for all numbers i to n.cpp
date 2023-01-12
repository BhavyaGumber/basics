vector<string> generate(int N)
{
	// Your code here
	vector<string> s;
	for (int i = 1; i <= N; i++) {
        // convert the current number to binary
        string binary = bitset<32>(i).to_string();
        // remove leading zeros from the binary string
        binary.erase(0, binary.find_first_not_of('0'));
        // print the binary number
        s.push_back(binary);
	}
        return s;
}
