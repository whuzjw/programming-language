// 用void来弄比较困难，但通过static s2，并在复制完成后，s=s2从而改变s
void reverse(string& s)
{
    static string s2;
    int size1 = s.length();
    int size2 = s2.length();
    if (size1 == size2)
    {
        s = s2;
        return;
    }
    s2 += s.at(size1 - size2 - 1);
    reverse(s);
}