(ns inter-server-management-api.specs.bandwidth
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def bandwidth-data
  {
   (ds/opt :id) int?
   (ds/opt :short_desc) string?
   (ds/opt :monthly_price) float?
   (ds/opt :monthly_price_display) string?
   })

(def bandwidth-spec
  (ds/spec
    {:name ::bandwidth
     :spec bandwidth-data}))
