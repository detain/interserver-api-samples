(ns inter-server-management-api.specs.vps-order-package-costs
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-order-package-costs-data
  {
   (ds/opt :57) float?
   })

(def vps-order-package-costs-spec
  (ds/spec
    {:name ::vps-order-package-costs
     :spec vps-order-package-costs-data}))
