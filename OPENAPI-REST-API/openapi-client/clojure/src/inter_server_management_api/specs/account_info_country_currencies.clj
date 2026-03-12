(ns inter-server-management-api.specs.account-info-country-currencies
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def account-info-country-currencies-data
  {
   })

(def account-info-country-currencies-spec
  (ds/spec
    {:name ::account-info-country-currencies
     :spec account-info-country-currencies-data}))
