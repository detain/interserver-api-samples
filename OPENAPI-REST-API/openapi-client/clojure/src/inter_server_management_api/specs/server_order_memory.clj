(ns inter-server-management-api.specs.server-order-memory
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def server-order-memory-data
  {
   (ds/opt :id) string?
   (ds/opt :price) string?
   (ds/opt :img) string?
   (ds/opt :short_desc) string?
   (ds/opt :long_desc) string?
   (ds/opt :manu) string?
   (ds/opt :size) string?
   (ds/opt :type) string?
   (ds/opt :hidden) string?
   (ds/opt :monthly_price) int?
   (ds/opt :drive_type) string?
   (ds/opt :monthly_price_display) string?
   })

(def server-order-memory-spec
  (ds/spec
    {:name ::server-order-memory
     :spec server-order-memory-data}))
