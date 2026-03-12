(ns inter-server-management-api.specs.config-ids
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def config-ids-data
  {
   (ds/opt :memory) int?
   (ds/opt :hd) int?
   (ds/opt :bandwidth) int?
   (ds/opt :ips) int?
   (ds/opt :os) int?
   (ds/opt :cp) int?
   (ds/opt :raid) int?
   })

(def config-ids-spec
  (ds/spec
    {:name ::config-ids
     :spec config-ids-data}))
