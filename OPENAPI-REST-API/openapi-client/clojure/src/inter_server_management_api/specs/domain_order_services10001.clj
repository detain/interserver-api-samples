(ns inter-server-management-api.specs.domain-order-services10001
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-order-services10001-data
  {
   (ds/opt :services_id) string?
   (ds/opt :services_name) string?
   (ds/opt :services_cost) string?
   (ds/opt :services_currency) string?
   (ds/opt :services_category) string?
   (ds/opt :services_buyable) string?
   (ds/opt :services_type) string?
   (ds/opt :services_field1) string?
   (ds/opt :services_field2) string?
   (ds/opt :services_module) string?
   (ds/opt :services_hidden) string?
   })

(def domain-order-services10001-spec
  (ds/spec
    {:name ::domain-order-services10001
     :spec domain-order-services10001-data}))
