(ns inter-server-management-api.specs.account-info-limits
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def account-info-limits-data
  {
   })

(def account-info-limits-spec
  (ds/spec
    {:name ::account-info-limits
     :spec account-info-limits-data}))
