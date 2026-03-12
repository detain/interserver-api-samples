(ns inter-server-management-api.specs.account-info-oauth-config-providers-value
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def account-info-oauth-config-providers-value-data
  {
   (ds/opt :enabled) boolean?
   (ds/opt :linked) boolean?
   (ds/opt :account) string?
   (ds/opt :url) string?
   })

(def account-info-oauth-config-providers-value-spec
  (ds/spec
    {:name ::account-info-oauth-config-providers-value
     :spec account-info-oauth-config-providers-value-data}))
