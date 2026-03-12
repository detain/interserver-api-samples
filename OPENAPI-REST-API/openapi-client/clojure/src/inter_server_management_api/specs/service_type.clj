(ns inter-server-management-api.specs.service-type
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def service-type-data
  {
   (ds/req :st_id) int?
   (ds/req :st_name) string?
   (ds/req :st_category) int?
   (ds/req :st_module) string?
   })

(def service-type-spec
  (ds/spec
    {:name ::service-type
     :spec service-type-data}))
