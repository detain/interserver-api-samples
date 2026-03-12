(ns inter-server-management-api.specs.server-order-ips-li
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.server-order-ip :refer :all]
            )
  (:import (java.io File)))


(def server-order-ips-li-data
  {
   (ds/opt :9) server-order-ip-spec
   })

(def server-order-ips-li-spec
  (ds/spec
    {:name ::server-order-ips-li
     :spec server-order-ips-li-data}))
