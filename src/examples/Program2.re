open Ambient;

let ambient = TestAmbients.create7();
let root = Ambient(-1, "", [ambient], [], [], []);

let _ = AmbientReducer.reduceFullyDebug(0, Js.log, root);
