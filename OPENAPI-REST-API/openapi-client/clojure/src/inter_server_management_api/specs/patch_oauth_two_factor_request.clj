(ns inter-server-management-api.specs.patch-oauth-two-factor-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def patch-oauth-two-factor-request-data
  {
   (ds/req :account_id) int?
   (ds/req :code) string?
   })

(def patch-oauth-two-factor-request-spec
  (ds/spec
    {:name ::patch-oauth-two-factor-request
     :spec patch-oauth-two-factor-request-data}))
