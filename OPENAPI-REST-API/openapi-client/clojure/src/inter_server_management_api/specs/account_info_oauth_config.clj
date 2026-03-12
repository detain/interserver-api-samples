(ns inter-server-management-api.specs.account-info-oauth-config
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.account-info-oauth-config-providers :refer :all]
            )
  (:import (java.io File)))


(def account-info-oauth-config-data
  {
   (ds/req :callback) string?
   (ds/req :providers) account-info-oauth-config-providers-spec
   })

(def account-info-oauth-config-spec
  (ds/spec
    {:name ::account-info-oauth-config
     :spec account-info-oauth-config-data}))
