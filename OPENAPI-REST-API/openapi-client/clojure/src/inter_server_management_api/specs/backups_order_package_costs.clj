(ns inter-server-management-api.specs.backups-order-package-costs
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def backups-order-package-costs-data
  {
   (ds/req :11006) int?
   })

(def backups-order-package-costs-spec
  (ds/spec
    {:name ::backups-order-package-costs
     :spec backups-order-package-costs-data}))
