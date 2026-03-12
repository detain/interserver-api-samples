(ns inter-server-management-api.specs.raid-option
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def raid-option-data
  {
   (ds/opt :id) int?
   (ds/opt :short_desc) string?
   (ds/opt :monthly_price) float?
   })

(def raid-option-spec
  (ds/spec
    {:name ::raid-option
     :spec raid-option-data}))
