static int diff_mnemonic_prefix;
	if (!strcmp(var, "diff.mnemonicprefix")) {
		diff_mnemonic_prefix = git_config_bool(var, value);
		return 0;
	}
	const char *a_prefix, *b_prefix;

	if (diff_mnemonic_prefix && DIFF_OPT_TST(o, REVERSE_DIFF)) {
		a_prefix = o->b_prefix;
		b_prefix = o->a_prefix;
	} else {
		a_prefix = o->a_prefix;
		b_prefix = o->b_prefix;
	}
	quote_two_c_style(&a_name, a_prefix, name_a, 0);
	quote_two_c_style(&b_name, b_prefix, name_b, 0);
	int has_trailing_newline, has_trailing_carriage_return;

	has_trailing_newline = (len > 0 && line[len-1] == '\n');
	has_trailing_carriage_return = (len > 0 && line[len-1] == '\r');
	if (has_trailing_carriage_return)
		len--;
	if (has_trailing_carriage_return)
		fputc('\r', file);
		 * made to the preimage. In --dirstat-by-file mode, count
		 * damaged files, not damaged lines. This is done by
		 * counting only a single damaged line per file.
		if (DIFF_OPT_TST(options, DIRSTAT_BY_FILE) && damage > 0)
			damage = 1;
	{ "php", "^[\t ]*\\(\\(function\\|class\\).*\\)" },
void diff_set_mnemonic_prefix(struct diff_options *options, const char *a, const char *b)
{
	if (!options->a_prefix)
		options->a_prefix = a;
	if (!options->b_prefix)
		options->b_prefix = b;
}

	const char *a_prefix, *b_prefix;
	diff_set_mnemonic_prefix(o, "a/", "b/");
	if (DIFF_OPT_TST(o, REVERSE_DIFF)) {
		a_prefix = o->b_prefix;
		b_prefix = o->a_prefix;
	} else {
		a_prefix = o->a_prefix;
		b_prefix = o->b_prefix;
	}

	a_one = quote_two(a_prefix, name_a + (*name_a == '/'));
	b_two = quote_two(b_prefix, name_b + (*name_b == '/'));
	if (!diff_mnemonic_prefix) {
		options->a_prefix = "a/";
		options->b_prefix = "b/";
	}
	} else if (opt_arg(arg, 0, "dirstat-by-file",
			   &options->dirstat_percent)) {
		options->output_format |= DIFF_FORMAT_DIRSTAT;
		DIFF_OPT_SET(options, DIRSTAT_BY_FILE);
	if (options->skip_stat_unmatch)