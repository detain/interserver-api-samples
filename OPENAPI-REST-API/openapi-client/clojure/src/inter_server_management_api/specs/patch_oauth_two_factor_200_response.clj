(ns inter-server-management-api.specs.patch-oauth-two-factor-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def patch-oauth-two-factor-200-response-data
  {
   (ds/opt :login) boolean?
   })

(def patch-oauth-two-factor-200-response-spec
  (ds/spec
    {:name ::patch-oauth-two-factor-200-response
     :spec patch-oauth-two-factor-200-response-data}))
