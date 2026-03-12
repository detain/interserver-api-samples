(ns inter-server-management-api.specs.hard-drive
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def hard-drive-data
  {
   (ds/opt :id) int?
   (ds/opt :short_desc) string?
   (ds/opt :size) string?
   (ds/opt :drive_type) string?
   (ds/opt :monthly_price) float?
   (ds/opt :monthly_price_display) string?
   })

(def hard-drive-spec
  (ds/spec
    {:name ::hard-drive
     :spec hard-drive-data}))
