(ns inter-server-management-api.specs.licenses-order-service-types11482
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def licenses-order-service-types11482-data
  {
   (ds/opt :services_id) string?
   (ds/opt :services_name) string?
   (ds/opt :services_cost) string?
   (ds/opt :services_category) string?
   (ds/opt :services_buyable) string?
   (ds/opt :services_type) string?
   (ds/opt :services_field1) string?
   (ds/opt :services_field2) string?
   (ds/opt :services_module) string?
   })

(def licenses-order-service-types11482-spec
  (ds/spec
    {:name ::licenses-order-service-types11482
     :spec licenses-order-service-types11482-data}))
