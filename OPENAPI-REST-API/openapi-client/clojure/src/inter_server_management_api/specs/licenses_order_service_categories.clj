(ns inter-server-management-api.specs.licenses-order-service-categories
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.licenses-order-service-categories509 :refer :all]
            )
  (:import (java.io File)))


(def licenses-order-service-categories-data
  {
   (ds/opt :LicensesOrderServiceCategories509) licenses-order-service-categories509-spec
   })

(def licenses-order-service-categories-spec
  (ds/spec
    {:name ::licenses-order-service-categories
     :spec licenses-order-service-categories-data}))
