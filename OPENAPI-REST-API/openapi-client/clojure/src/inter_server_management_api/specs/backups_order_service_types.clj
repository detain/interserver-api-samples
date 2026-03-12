(ns inter-server-management-api.specs.backups-order-service-types
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.backups-order-service-types :refer :all]
            )
  (:import (java.io File)))


(def backups-order-service-types-data
  {
   (ds/opt :11006) backups-order-service-types-spec
   })

(def backups-order-service-types-spec
  (ds/spec
    {:name ::backups-order-service-types
     :spec backups-order-service-types-data}))
