s, err = pcall(box.error, 1, "err")
err.trace[1].file
err.trace[1].line
s, err = pcall(error, "oh no" )
err:unpack()
err.trace