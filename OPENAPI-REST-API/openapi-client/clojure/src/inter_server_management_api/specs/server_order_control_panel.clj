(ns inter-server-management-api.specs.server-order-control-panel
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def server-order-control-panel-data
  {
   (ds/opt :id) string?
   (ds/opt :price) int?
   (ds/opt :img) string?
   (ds/opt :short_desc) string?
   (ds/opt :long_desc) string?
   (ds/opt :os_type) string?
   (ds/opt :monthly_price) int?
   (ds/opt :types) (s/coll-of string?)
   (ds/opt :price_display) string?
   (ds/opt :monthly_price_display) string?
   })

(def server-order-control-panel-spec
  (ds/spec
    {:name ::server-order-control-panel
     :spec server-order-control-panel-data}))
