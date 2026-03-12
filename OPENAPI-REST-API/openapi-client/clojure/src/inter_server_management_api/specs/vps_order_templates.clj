(ns inter-server-management-api.specs.vps-order-templates
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-order-templates-hyperv :refer :all]
            )
  (:import (java.io File)))


(def vps-order-templates-data
  {
   (ds/opt :hyperv) vps-order-templates-hyperv-spec
   })

(def vps-order-templates-spec
  (ds/spec
    {:name ::vps-order-templates
     :spec vps-order-templates-data}))
