(ns inter-server-management-api.specs.licenses-order-service-types
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.licenses-order-service-types11482 :refer :all]
            )
  (:import (java.io File)))


(def licenses-order-service-types-data
  {
   (ds/opt :LicensesOrderServiceTypes11482) licenses-order-service-types11482-spec
   })

(def licenses-order-service-types-spec
  (ds/spec
    {:name ::licenses-order-service-types
     :spec licenses-order-service-types-data}))
