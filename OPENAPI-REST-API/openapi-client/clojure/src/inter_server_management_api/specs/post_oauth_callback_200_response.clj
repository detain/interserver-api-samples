(ns inter-server-management-api.specs.post-oauth-callback-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def post-oauth-callback-200-response-data
  {
   (ds/opt :login) boolean?
   (ds/opt :signup) boolean?
   (ds/opt :linked) boolean?
   (ds/opt :account_id) int?
   (ds/opt :error_code) string?
   })

(def post-oauth-callback-200-response-spec
  (ds/spec
    {:name ::post-oauth-callback-200-response
     :spec post-oauth-callback-200-response-data}))
