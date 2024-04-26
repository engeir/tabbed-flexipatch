static Bool basenametitles = True;

char *
getbasename(const char *name)
{
	char *pos = strrchr(name, '/');
	if (pos)
		return pos+1;
	return (char *)name;
}
