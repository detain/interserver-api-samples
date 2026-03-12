(ns inter-server-management-api.specs.server-order-config-ids
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def server-order-config-ids-data
  {
   (ds/opt :memory) int?
   (ds/opt :bandwidth) string?
   (ds/opt :ips) string?
   (ds/opt :os) string?
   (ds/opt :cp) int?
   (ds/opt :raid) string?
   (ds/opt :hd) string?
   })

(def server-order-config-ids-spec
  (ds/spec
    {:name ::server-order-config-ids
     :spec server-order-config-ids-data}))
