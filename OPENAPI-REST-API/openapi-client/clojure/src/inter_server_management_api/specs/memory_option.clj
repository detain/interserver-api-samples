(ns inter-server-management-api.specs.memory-option
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def memory-option-data
  {
   (ds/opt :id) int?
   (ds/opt :short_desc) string?
   (ds/opt :monthly_price) float?
   (ds/opt :monthly_price_display) string?
   })

(def memory-option-spec
  (ds/spec
    {:name ::memory-option
     :spec memory-option-data}))
