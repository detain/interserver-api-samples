(ns inter-server-management-api.specs.server-location1
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def server-location1-data
  {
   (ds/req :location_id) int?
   (ds/req :location_name) string?
   (ds/req :location_lat) string?
   (ds/req :location_long) string?
   (ds/opt :location_description) string?
   (ds/opt :location_ipmi_group) int?
   })

(def server-location1-spec
  (ds/spec
    {:name ::server-location1
     :spec server-location1-data}))
