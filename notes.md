# Notes

Able to run over corpus of 219,061 Dockerfiles and have only 150 errors.

Out of the 150 I've classified them into two groups. Things I'd like to/should fix and things that just seem like malformed files (or things
that would be super hard to support and are infrequent).

## Like to fix

```bash
./sources/134336147.Dockerfile
./sources/152406244.Dockerfile
./sources/164000669.Dockerfile
./sources/167471909.Dockerfile
./sources/170549333.Dockerfile
./sources/189697480.Dockerfile
./sources/191684677.Dockerfile
./sources/197968708.Dockerfile
./sources/218746716.Dockerfile
./sources/225327663.Dockerfile
./sources/227186278.Dockerfile # Space in ${ARG1 ARG2}?
./sources/232201790.Dockerfile
./sources/232201792.Dockerfile
./sources/248861433.Dockerfile # WORKDIR $$HOME
./sources/249922893.Dockerfile
./sources/249922894.Dockerfile
./sources/252782233.Dockerfile # JSON array item looks like comment
./sources/260130616.Dockerfile # Chown single quotes
./sources/262565861.Dockerfile # Tricky path handling with windows and C:\path\
./sources/282786208.Dockerfile
./sources/305463014.Dockerfile # Label can be quoted value with spaces?
./sources/317646528.Dockerfile # ENV line_continuation then comments
./sources/324839563.Dockerfile # More tricky trailing \ with escape=`
./sources/332063161.Dockerfile # '#' in env_value
./sources/348580446.Dockerfile # ENV key\ (no-space line_continuation)
./sources/356952324.Dockerfile
./sources/360538798.Dockerfile
./sources/362100800.Dockerfile # ADD line_continuation no space
./sources/363195429.Dockerfile
./sources/418770599.Dockerfile
./sources/423628293.Dockerfile
./sources/470015854.Dockerfile
./sources/471979798.Dockerfile
./sources/473868061.Dockerfile
```

## Malformed files (or corner cases we wont accept)

```bash
./sources/134558520.Dockerfile|||EXPOSE [5432, 8000]
./sources/142544668.Dockerfile|||FROM image_with_empty_tag:
./sources/150409029.Dockerfile|||EXPOSE 5432, 8000
./sources/155895544.Dockerfile|||FROM %BASE
./sources/155895545.Dockerfile|||FROM %BASE
./sources/155895546.Dockerfile|||FROM %BASE
./sources/155895547.Dockerfile|||FROM %BASE
./sources/155895549.Dockerfile|||FROM %BASE
./sources/155895550.Dockerfile|||FROM %BASE
./sources/155895552.Dockerfile|||FROM %BASE
./sources/155895553.Dockerfile|||FROM %BASE
./sources/155895554.Dockerfile|||FROM %BASE
./sources/155895555.Dockerfile|||FROM %BASE
./sources/155895556.Dockerfile|||FROM %BASE
./sources/155895557.Dockerfile|||FROM %BASE
./sources/155895558.Dockerfile|||FROM %BASE
./sources/155895559.Dockerfile|||FROM %BASE
./sources/155895560.Dockerfile|||FROM %BASE
./sources/155895561.Dockerfile|||FROM %BASE
./sources/155895562.Dockerfile|||FROM %BASE
./sources/157481104.Dockerfile|||VOLUME ["a", "b",]
./sources/157727952.Dockerfile|||VOLUME ["a", "b",]
./sources/157799773.Dockerfile|||FROM postgres:#{VERSION}
./sources/164899378.Dockerfile|||ONBUILD path /path
./sources/167246592.Dockerfile|||EXPOSE [ports]
./sources/173609716.Dockerfile|||VOLUME ["a", "b",]
./sources/174183500.Dockerfile|||EXPOSE 2343 ??
./sources/174557784.Dockerfile||| CMD ["a", "b"] { blah
./sources/184682551.Dockerfile|||FROM postgres:#{VERSION}
./sources/184682557.Dockerfile|||FROM postgres:#{VERSION}
./sources/184682559.Dockerfile|||FROM postgres:#{VERSION}
./sources/190482798.Dockerfile|||ADD $app$ /home/user/$app$
./sources/190482800.Dockerfile|||ADD $app$ /home/user/$app$
./sources/190482802.Dockerfile|||ADD $app$ /home/user/$app$
./sources/190482804.Dockerfile|||ADD $app$ /home/user/$app$
./sources/190482806.Dockerfile|||ADD $app$ /home/user/$app$
./sources/190482808.Dockerfile|||ADD $app$ /home/user/$app$
./sources/190482810.Dockerfile|||ADD $app$ /home/user/$app$
./sources/190482812.Dockerfile|||ADD $app$ /home/user/$app$
./sources/194993545.Dockerfile|||FROM FROM image
./sources/195984271.Dockerfile|||CMD ["a", "b"]BLAH
./sources/198230739.Dockerfile|||FROM FROM image
./sources/199954068.Dockerfile|||ENTRYPOINT ["blah]<<EOF>>
./sources/219498385.Dockerfile|||ENV WORD=value WORD=value " WORD=value WORD="value"
./sources/221607519.Dockerfile|||ENV WORD="$(value)\\$"
./sources/221607520.Dockerfile|||ENV WORD="$(value)\\$"
./sources/221607521.Dockerfile|||ENV WORD="$(value)\\$"
./sources/226119246.Dockerfile|||ENV KEY \\\n\\\t#php\\\n\\\tlocation ~ \\\\.php$ {\\\n\\\t}
./sources/234276543.Dockerfile|||FROM repo/image:tagwith:colon
./sources/241644712.Dockerfile|||FROM why_have_a_line_continuation \
./sources/242704403.Dockerfile|||HEALTHECK CMD ["./json_array" "-style"] || exit 1
./sources/242704437.Dockerfile|||HEALTHECK CMD ["./json_array" "-style"] || exit 1
./sources/242704491.Dockerfile|||HEALTHECK CMD ["./json_array" "-style"] || exit 1
./sources/249315265.Dockerfile|||HEALTHECK --retries=3 cat /this_is_a_cmd_without_CMD
./sources/251727872.Dockerfile|||FROM image_with_empty_tag:
./sources/252769747.Dockerfile|||ENV ["as", "json", "array", "not", "allowed"]
./sources/252773736.Dockerfile|||comment without the leading '#'
./sources/252773737.Dockerfile|||comment without the leading '#'
./sources/252773759.Dockerfile|||HEALTHECK --interval=10s \--timeout=why CMD /blah.sh
./sources/252775360.Dockerfile|||comment without the leading '#'
./sources/252776367.Dockerfile|||CMD ["./json_array" "-style"] && mixed with other style
./sources/252777373.Dockerfile|||CMD ["a", "b"]"]
./sources/252781431.Dockerfile|||ONBUILD : RUN echo why do this
./sources/252784999.Dockerfile|||missing line continuation in run
./sources/252787019.Dockerfile|||HEALTHECK \--interval=why \--timeout=why ...
./sources/255735600.Dockerfile|||WORKDIR /path/$var_with_trailing$
./sources/258465881.Dockerfile|||ENV ["key", "value"]
./sources/266536260.Dockerfile|||EXPOSE PORT
./sources/271841186.Dockerfile|||ENV "blahblah\\$\[blah]"
./sources/272952899.Dockerfile|||CMD ["why times"]8000
./sources/282276138.Dockerfile|||Bad FROM statement
./sources/285544794.Dockerfile|||Bad EXPOSE statement
./sources/294357242.Dockerfile|||Illegal use of ':' as label key/value separator
./sources/295168279.Dockerfile|||EXPOSE PORT
./sources/299773398.Dockerfile|||Bad FROM statement
./sources/311966904.Dockerfile|||EXPOSE PORT
./sources/323890436.Dockerfile|||Double colon in FROM "FROM blah/blah::blah"
./sources/332516105.Dockerfile|||':' in tag
./sources/339301097.Dockerfile|||FROM:%{almost_docker_variable}
./sources/345737825.Dockerfile|||FROM %(almost_docker_variable)
./sources/346805945.Dockerfile|||FROM:%(almost_docker_variable)
./sources/347362954.Dockerfile|||FROM repo/image:
./sources/351396254.Dockerfile|||EXPOSE 80;
./sources/351396260.Dockerfile|||ENV "blah$"
./sources/354166056.Dockerfile|||ADD "path/${bad_docker_var/blah-${blah}"
./sources/354874649.Dockerfile|||FROM:%(almost_docker_variable)
./sources/357359482.Dockerfile|||Bad FROM statement (mozzila one)
./sources/357359482.Dockerfile|||Bad FROM statement (mozzila one)
./sources/357359484.Dockerfile|||Bad FROM statement (mozzila one)
./sources/357359487.Dockerfile|||Bad FROM statement (mozzila one)
./sources/357359497.Dockerfile|||Bad FROM statement (mozzila one)
./sources/357359504.Dockerfile|||Bad FROM statement (mozzila one)
./sources/357359511.Dockerfile|||Bad FROM statement (mozzila one)
./sources/357359513.Dockerfile|||Bad FROM statement (mozzila one)
./sources/357359517.Dockerfile|||Bad FROM statement (mozzila one)
./sources/358598487.Dockerfile|||FROM:%(almost_docker_variable)
./sources/362684428.Dockerfile|||FROM:%(almost_docker_variable)
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
./sources/438887079.Dockerfile|||FROM #VAR1 and CMD ["#CMD"#VAR2]
./sources/438887080.Dockerfile|||FROM #VAR1
./sources/439883310.Dockerfile|||expose $port$
./sources/457388513.Dockerfile|||Extraneous characters after CMD []
./sources/462009975.Dockerfile|||Mangled VOLUME statement
./sources/468362269.Dockerfile|||Bad ARG: ARG VERSION>=0.0.0
./sources/470168017.Dockerfile|||FROM #VAR1
./sources/470404145.Dockerfile|||EXPOSE PORT
```
