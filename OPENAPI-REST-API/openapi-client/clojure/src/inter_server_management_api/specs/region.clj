(ns inter-server-management-api.specs.region
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def region-data
  {
   (ds/opt :region_id) int?
   (ds/opt :region_name) string?
   })

(def region-spec
  (ds/spec
    {:name ::region
     :spec region-data}))
