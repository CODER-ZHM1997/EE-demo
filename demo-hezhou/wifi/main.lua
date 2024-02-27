-- LuaTools需要PROJECT和VERSION这两个信息
PROJECT = "wifidemo"
VERSION = "1.0.0"

-- 引入必要的库文件(lua编写), 内部库不需要require
sys = require("sys")
require("sysplus")


sys.taskInit(function()
    print("我是wifi demo")
    -- wlan.init()
    -- -- wlan.staIp(false, "192.168.4.8")
    -- wlan.connect("test", "12341234")
    -- log.info("wlan", "wait for IP_READY")
    -- sys.waitUntil("IP_READY", 30000)
    -- if wlan.ready() then
    --     log.info("wlan", "ready !!")
    --     log.info("ip", wlan.getIP())
    -- else
    --     print("wlan not ready")
    -- end
end
)

sys.run()
