(ns inter-server-management-api.specs.control-panel
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def control-panel-data
  {
   (ds/opt :id) int?
   (ds/opt :short_desc) string?
   (ds/opt :monthly_price) float?
   })

(def control-panel-spec
  (ds/spec
    {:name ::control-panel
     :spec control-panel-data}))
