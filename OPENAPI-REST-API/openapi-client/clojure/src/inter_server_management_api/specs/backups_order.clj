(ns inter-server-management-api.specs.backups-order
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.backups-order-package-costs :refer :all]
            [inter-server-management-api.specs.backups-order-service-types :refer :all]
            )
  (:import (java.io File)))


(def backups-order-data
  {
   (ds/req :packageCosts) backups-order-package-costs-spec
   (ds/req :serviceTypes) backups-order-service-types-spec
   })

(def backups-order-spec
  (ds/spec
    {:name ::backups-order
     :spec backups-order-data}))
