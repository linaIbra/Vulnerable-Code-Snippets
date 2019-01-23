// From methods/basehttp.cc https://justi.cz/security/2019/01/22/apt-rce.html
NextURI = DeQuoteString(Req.Location);
...
Redirect(NextURI);

// From apt-pkg/acquire-method.cc
void pkgAcqMethod::Redirect(const string &NewURI)
{
   std::cout << "103 Redirect\nURI: " << Queue->Uri << "\n"
             << "New-URI: " << NewURI << "\n"
             << "\n" << std::flush;
   Dequeue();
}
