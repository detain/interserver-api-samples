(ns inter-server-management-api.specs.licenses-order
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.licenses-order-service-categories :refer :all]
            [inter-server-management-api.specs.licenses-order-package-costs :refer :all]
            [inter-server-management-api.specs.licenses-order-service-types :refer :all]
            )
  (:import (java.io File)))


(def licenses-order-data
  {
   (ds/opt :serviceCategories) licenses-order-service-categories-spec
   (ds/opt :packageCosts) licenses-order-package-costs-spec
   (ds/opt :serviceTypes) licenses-order-service-types-spec
   })

(def licenses-order-spec
  (ds/spec
    {:name ::licenses-order
     :spec licenses-order-data}))
