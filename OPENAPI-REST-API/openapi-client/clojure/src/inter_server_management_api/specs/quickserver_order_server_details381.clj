(ns inter-server-management-api.specs.quickserver-order-server-details381
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def quickserver-order-server-details381-data
  {
   (ds/opt :cpu) string?
   (ds/opt :ram) string?
   (ds/opt :hd) string?
   (ds/opt :cores) int?
   (ds/opt :cost) string?
   })

(def quickserver-order-server-details381-spec
  (ds/spec
    {:name ::quickserver-order-server-details381
     :spec quickserver-order-server-details381-data}))
