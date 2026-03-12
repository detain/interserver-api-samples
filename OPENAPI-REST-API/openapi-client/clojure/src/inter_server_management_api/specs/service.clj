(ns inter-server-management-api.specs.service
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def service-data
  {
   (ds/req :services_id) int?
   (ds/req :services_name) string?
   (ds/req :services_cost) float?
   (ds/req :services_currency) string?
   (ds/req :services_category) int?
   (ds/req :services_buyable) boolean?
   (ds/req :services_type) int?
   (ds/req :services_field1) string?
   (ds/req :services_field2) string?
   (ds/req :services_module) string?
   })

(def service-spec
  (ds/spec
    {:name ::service
     :spec service-data}))
