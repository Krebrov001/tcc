#All models (by directory name)
MODELS := \
	navsses \
	power_fivecells \
	power_converters_switching_devices \
	power_converters_switching_function


# Run the refactoring_tool on the code.
.PHONY: refactor
refactor:
	@for d in $(MODELS); do \
		echo "Refactoring model '$$d'"; \
		$(MAKE) -s -C $$d refactor; \
	done;


# Verify the modified code generates the correct results
.PHONY: verify
verify:
	@for d in $(MODELS); do \
		echo "Running model '$$d'"; \
		$(MAKE) -s -C $$d verify; \
	done;


.PHONY: clean
clean:
	@for d in $(MODELS); do \
		$(MAKE) -s -C $$d clean; \
	done;
