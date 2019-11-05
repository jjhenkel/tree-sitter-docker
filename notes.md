# Notes

Able to run over corpus of 219,061 Dockerfiles and have only 71 errors.

I've manually examined each of the 71 and added notes as to _why_ they
fail to parse. I don't think it's worth it to further support these (as almost all of them are truly malformed files). I did this at an earlier
stage where there were 150 errors and used that manual analysis to decide
how to further extend the grammar.

## Malformed files (or corner cases we wont accept)

```bash
./sources/134558520.Dockerfile|||EXPOSE [5432, 8000]
./sources/142544668.Dockerfile|||FROM image_with_empty_tag:
./sources/150409029.Dockerfile|||EXPOSE 5432, 8000
./sources/157799773.Dockerfile|||FROM postgres:#{VERSION}
./sources/164899378.Dockerfile|||ONBUILD path /path
./sources/167246592.Dockerfile|||EXPOSE [ports]
./sources/174183500.Dockerfile|||EXPOSE 2343 ??
./sources/174557784.Dockerfile||| CMD ["a", "b"] { blah
./sources/184682551.Dockerfile|||FROM postgres:#{VERSION}
./sources/184682557.Dockerfile|||FROM postgres:#{VERSION}
./sources/184682559.Dockerfile|||FROM postgres:#{VERSION}
./sources/194993545.Dockerfile|||FROM FROM image
./sources/195984271.Dockerfile|||CMD ["a", "b"]BLAH
./sources/198230739.Dockerfile|||FROM FROM image
./sources/199954068.Dockerfile|||ENTRYPOINT ["blah]<<EOF>>
./sources/219498385.Dockerfile|||ENV WORD=value WORD=value " WORD=value WORD="value"
./sources/227186278.Dockerfile|||EXPOSE ${BAD DOCKER VAR WITH SPACES}
./sources/242704403.Dockerfile|||HEALTHECK CMD ["./json_array" "-style"] || exit 1
./sources/242704437.Dockerfile|||HEALTHECK CMD ["./json_array" "-style"] || exit 1
./sources/242704491.Dockerfile|||HEALTHECK CMD ["./json_array" "-style"] || exit 1
./sources/249315265.Dockerfile|||HEALTHECK --retries=3 cat /this_is_a_cmd_without_CMD
./sources/251727872.Dockerfile|||FROM image_with_empty_tag:
./sources/252767356.Dockerfile|||Non-continuation newline in ENV KEY="Value " (so mismatched quotes)
./sources/252767357.Dockerfile|||Non-continuation newline in ENV KEY="Value " (so mismatched quotes)
./sources/252767358.Dockerfile|||Non-continuation newline in ENV KEY="Value " (so mismatched quotes)
./sources/252769747.Dockerfile|||ENV ["as", "json", "array", "not", "allowed"]
./sources/252773759.Dockerfile|||HEALTHECK --interval=10s \--timeout=why CMD /blah.sh
./sources/252775360.Dockerfile|||comment without the leading '#'
./sources/252776367.Dockerfile|||CMD ["./json_array" "-style"] && mixed with other style
./sources/252777373.Dockerfile|||CMD ["a", "b"]"]
./sources/252781431.Dockerfile|||ONBUILD : RUN echo why do this
./sources/252784999.Dockerfile|||missing line continuation in run
./sources/258465881.Dockerfile|||ENV ["key", "value"]
./sources/266536260.Dockerfile|||EXPOSE PORT
./sources/282276138.Dockerfile|||Bad FROM statement
./sources/285544794.Dockerfile|||Bad EXPOSE statement
./sources/294357242.Dockerfile|||Illegal use of ':' as label key/value separator
./sources/295168279.Dockerfile|||EXPOSE PORT
./sources/299773398.Dockerfile|||Bad FROM statement
./sources/311966904.Dockerfile|||EXPOSE PORT
./sources/323890436.Dockerfile|||Double colon in FROM "FROM blah/blah::blah"
./sources/347362954.Dockerfile|||FROM repo/image:
./sources/351396254.Dockerfile|||EXPOSE 80;
./sources/354166056.Dockerfile|||ADD "path/${bad_docker_var/blah-${blah}"
./sources/354874649.Dockerfile|||FROM:%(almost_docker_variable)
./sources/357359482.Dockerfile|||Bad FROM statement (mozzila one)
./sources/357359484.Dockerfile|||Bad FROM statement (mozzila one)
./sources/357359487.Dockerfile|||Bad FROM statement (mozzila one)
./sources/357359497.Dockerfile|||Bad FROM statement (mozzila one)
./sources/357359504.Dockerfile|||Bad FROM statement (mozzila one)
./sources/357359511.Dockerfile|||Bad FROM statement (mozzila one)
./sources/357359513.Dockerfile|||Bad FROM statement (mozzila one)
./sources/357359517.Dockerfile|||Bad FROM statement (mozzila one)
./sources/363012471.Dockerfile|||Crazy amounts of templating
./sources/363012474.Dockerfile|||Crazy amounts of templating
./sources/368694736.Dockerfile|||BAD User directive
./sources/374419620.Dockerfile|||HEALTHECK CMD ["./json_array" "-style"] || exit 1
./sources/376917517.Dockerfile|||FROM:#{almost_docker_variable}
./sources/395231426.Dockerfile|||ONBUILD no specific directive
./sources/405398792.Dockerfile|||ONBUILD no specific directive
./sources/406429644.Dockerfile|||Illegal use of ':' as label key/value separator
./sources/411862354.Dockerfile|||ONBUILD no specific directive
./sources/411862358.Dockerfile|||ONBUILD no specific directive
./sources/423328517.Dockerfile|||EXPOSE with 0.0.0.0?
./sources/437822224.Dockerfile|||FROM variable interpolation with #VAR#
./sources/438887080.Dockerfile|||FROM #VAR1
./sources/439883310.Dockerfile|||expose $port$
./sources/439883313.Dockerfile|||expose $port$
./sources/457388513.Dockerfile|||Extraneous characters after CMD []
./sources/462009975.Dockerfile|||Mangled VOLUME statement
./sources/468362269.Dockerfile|||Bad ARG: ARG VERSION>=0.0.0
./sources/470404145.Dockerfile|||EXPOSE PORT
```
