(ns inter-server-management-api.specs.post-oauth-callback-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def post-oauth-callback-request-data
  {
   (ds/opt :provider) string?
   })

(def post-oauth-callback-request-spec
  (ds/spec
    {:name ::post-oauth-callback-request
     :spec post-oauth-callback-request-data}))
