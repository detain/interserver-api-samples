(ns inter-server-management-api.specs.licenses-order-service-categories509
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def licenses-order-service-categories509-data
  {
   (ds/opt :category_id) string?
   (ds/opt :category_name) string?
   (ds/opt :category_tag) string?
   (ds/opt :category_module) string?
   })

(def licenses-order-service-categories509-spec
  (ds/spec
    {:name ::licenses-order-service-categories509
     :spec licenses-order-service-categories509-data}))
