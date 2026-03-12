(ns inter-server-management-api.specs.server-order-os
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def server-order-os-data
  {
   (ds/opt :id) string?
   (ds/opt :price) int?
   (ds/opt :img) string?
   (ds/opt :short_desc) string?
   (ds/opt :long_desc) string?
   (ds/opt :monthly_price) int?
   (ds/opt :active) string?
   (ds/opt :price_display) string?
   (ds/opt :monthly_price_display) string?
   })

(def server-order-os-spec
  (ds/spec
    {:name ::server-order-os
     :spec server-order-os-data}))
