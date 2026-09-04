import streamlit as st
st.header("MY CHATBOT")
with st.sidebar:
    st.title("Menu")
    file=st.file_uploader("Upload You File")