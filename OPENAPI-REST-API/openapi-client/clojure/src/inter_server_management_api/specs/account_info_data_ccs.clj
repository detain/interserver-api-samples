(ns inter-server-management-api.specs.account-info-data-ccs
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def account-info-data-ccs-data
  {
   })

(def account-info-data-ccs-spec
  (ds/spec
    {:name ::account-info-data-ccs
     :spec account-info-data-ccs-data}))
