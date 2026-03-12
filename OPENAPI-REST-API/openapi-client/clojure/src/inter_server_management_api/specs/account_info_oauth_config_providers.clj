(ns inter-server-management-api.specs.account-info-oauth-config-providers
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def account-info-oauth-config-providers-data
  {
   })

(def account-info-oauth-config-providers-spec
  (ds/spec
    {:name ::account-info-oauth-config-providers
     :spec account-info-oauth-config-providers-data}))
