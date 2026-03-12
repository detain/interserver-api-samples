(ns inter-server-management-api.specs.operating-system
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def operating-system-data
  {
   (ds/opt :id) int?
   (ds/opt :short_desc) string?
   (ds/opt :monthly_price) float?
   })

(def operating-system-spec
  (ds/spec
    {:name ::operating-system
     :spec operating-system-data}))
